
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct most_video_dev {int wait_data; int list_lock; int pending_mbos; int mute; } ;
struct mbo {int list; int hdm_channel_id; int ifp; } ;


 int VAR_0 ;
 struct most_video_dev* FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct mbo *VAR_1)
{
 unsigned long VAR_2;
 struct most_video_dev *VAR_3 =
  FUNC_0(VAR_1->ifp, VAR_1->hdm_channel_id);

 if (!VAR_3)
  return -VAR_0;

 FUNC_2(&VAR_3->list_lock, VAR_2);
 if (FUNC_4(VAR_3->mute)) {
  FUNC_3(&VAR_3->list_lock, VAR_2);
  return -VAR_0;
 }

 FUNC_1(&VAR_1->list, &VAR_3->pending_mbos);
 FUNC_3(&VAR_3->list_lock, VAR_2);
 FUNC_5(&VAR_3->wait_data);
 return 0;
}
