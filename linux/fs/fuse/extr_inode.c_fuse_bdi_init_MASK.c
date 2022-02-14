
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {TYPE_1__* s_bdi; scalar_t__ s_bdev; } ;
struct fuse_conn {int dev; } ;
struct TYPE_4__ {int capabilities; int ra_pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 TYPE_1__ VAR_3 ;
 int FUNC_4 (struct super_block*,char*,int ,int ,char*) ;

__attribute__((used)) static int FUNC_5(struct fuse_conn *VAR_4, struct super_block *VAR_5)
{
 int VAR_6;
 char *VAR_7 = "";

 if (VAR_5->s_bdev) {
  VAR_7 = "-fuseblk";




  FUNC_2(VAR_5->s_bdi);
  VAR_5->s_bdi = &VAR_3;
 }
 VAR_6 = FUNC_4(VAR_5, "%u:%u%s", FUNC_0(VAR_4->dev),
       FUNC_1(VAR_4->dev), VAR_7);
 if (VAR_6)
  return VAR_6;

 VAR_5->s_bdi->ra_pages = VAR_2;

 VAR_5->s_bdi->capabilities = VAR_0 | VAR_1;
 FUNC_3(VAR_5->s_bdi, 1);

 return 0;
}
