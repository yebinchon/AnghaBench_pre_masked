
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_hba {int dev; } ;
struct ufs_bsg_request {int dummy; } ;
struct ufs_bsg_reply {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct ufs_hba *VAR_1,
         unsigned int VAR_2,
         unsigned int VAR_3)
{
 int VAR_4 = sizeof(struct ufs_bsg_request);
 int VAR_5 = sizeof(struct ufs_bsg_reply);

 if (VAR_4 > VAR_2 || VAR_5 > VAR_3) {
  FUNC_0(VAR_1->dev, "not enough space assigned\n");
  return -VAR_0;
 }

 return 0;
}
