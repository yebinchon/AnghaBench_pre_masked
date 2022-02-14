
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sis_video_info {int video_size; int UMAsize; int LFBsize; int chip; int revision_id; int nbridge; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;


 int FUNC_1 (int ,int,int*) ;

__attribute__((used)) static int FUNC_2(struct sis_video_info *VAR_2)
{




 VAR_2->video_size = 0;
 VAR_2->UMAsize = VAR_2->LFBsize = 0;

 switch(VAR_2->chip) {
 default:
  return -1;
 }
 return 0;
}
