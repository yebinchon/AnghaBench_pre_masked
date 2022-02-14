
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbo {int buffer_length; int virt_address; } ;
struct channel {int substream; scalar_t__ is_stream_running; int id; int iface; int playback_waitq; } ;


 int VAR_0 ;
 int FUNC_0 (struct channel* const,struct mbo*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,int ,int ) ;
 struct mbo* FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (struct mbo*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static int FUNC_7(void *VAR_1)
{
 struct channel *const VAR_2 = VAR_1;

 while (!FUNC_1()) {
  struct mbo *VAR_3 = ((void*)0);
  bool VAR_4 = 0;

  FUNC_6(
   VAR_2->playback_waitq,
   FUNC_1() ||
   (VAR_2->is_stream_running &&
    (VAR_3 = FUNC_3(VAR_2->iface, VAR_2->id,
          &VAR_0))));
  if (!VAR_3)
   continue;

  if (VAR_2->is_stream_running)
   VAR_4 = FUNC_0(VAR_2, VAR_3);
  else
   FUNC_2(VAR_3->virt_address, 0, VAR_3->buffer_length);

  FUNC_4(VAR_3);
  if (VAR_4)
   FUNC_5(VAR_2->substream);
 }

 return 0;
}
