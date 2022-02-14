
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbo {int hdm_channel_id; int ifp; } ;
struct channel {int substream; scalar_t__ is_stream_running; } ;


 int VAR_0 ;
 int FUNC_0 (struct channel*,struct mbo*) ;
 struct channel* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct mbo*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct mbo *VAR_1)
{
 struct channel *VAR_2 = FUNC_1(VAR_1->ifp, VAR_1->hdm_channel_id);
 bool VAR_3 = 0;

 if (!VAR_2) {
  FUNC_3("sound_rx_completion(), invalid channel %d\n",
         VAR_1->hdm_channel_id);
  return -VAR_0;
 }

 if (VAR_2->is_stream_running)
  VAR_3 = FUNC_0(VAR_2, VAR_1);

 FUNC_2(VAR_1);

 if (VAR_3)
  FUNC_4(VAR_2->substream);

 return 0;
}
