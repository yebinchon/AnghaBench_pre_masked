
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {unsigned int stream_id; int pipe; } ;
struct dummy_hcd {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (struct dummy_hcd*) ;
 int FUNC_3 (struct dummy_hcd*,struct urb*) ;
 unsigned int FUNC_4 (struct dummy_hcd*,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct dummy_hcd *VAR_1, struct urb *VAR_2)
{
 unsigned int VAR_3;
 int VAR_4;

 VAR_4 = FUNC_3(VAR_1, VAR_2);
 if (!VAR_2->stream_id) {
  if (VAR_4)
   return -VAR_0;
  return 0;
 }
 if (!VAR_4)
  return -VAR_0;

 VAR_3 = FUNC_4(VAR_1,
   FUNC_5(VAR_2->pipe));
 if (VAR_2->stream_id > VAR_3) {
  FUNC_1(FUNC_2(VAR_1), "Stream id %d is out of range.\n",
    VAR_2->stream_id);
  FUNC_0();
  return -VAR_0;
 }
 return 0;
}
