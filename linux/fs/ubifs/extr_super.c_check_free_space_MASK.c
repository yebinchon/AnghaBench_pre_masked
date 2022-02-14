
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ total_free; scalar_t__ total_dirty; } ;
struct ubifs_info {scalar_t__ dark_wm; int bi; TYPE_1__ lst; } ;


 int VAR_0 ;
 int FUNC_0 (struct ubifs_info*,int) ;
 int FUNC_1 (struct ubifs_info*,int *) ;
 int FUNC_2 (struct ubifs_info*) ;
 int FUNC_3 (struct ubifs_info*,char*) ;

__attribute__((used)) static int FUNC_4(struct ubifs_info *VAR_1)
{
 FUNC_0(VAR_1, VAR_1->dark_wm > 0);
 if (VAR_1->lst.total_free + VAR_1->lst.total_dirty < VAR_1->dark_wm) {
  FUNC_3(VAR_1, "insufficient free space to mount in R/W mode");
  FUNC_1(VAR_1, &VAR_1->bi);
  FUNC_2(VAR_1);
  return -VAR_0;
 }
 return 0;
}
