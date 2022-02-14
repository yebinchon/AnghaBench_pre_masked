
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct gfs2_sbd {int sd_flags; } ;
struct gfs2_inode {int dummy; } ;
struct TYPE_2__ {int host; } ;


 int VAR_0 ;
 struct gfs2_inode* FUNC_0 (int ) ;
 struct gfs2_sbd* FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct gfs2_inode*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct page*,int *) ;
 int FUNC_5 (struct page*,int ) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct gfs2_inode*,struct page*) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct page*) ;

__attribute__((used)) static int FUNC_11(void *VAR_5, struct page *VAR_6)
{
 struct gfs2_inode *VAR_7 = FUNC_0(VAR_6->mapping->host);
 struct gfs2_sbd *VAR_8 = FUNC_1(VAR_6->mapping->host);

 int VAR_9;

 if (FUNC_3(VAR_6->mapping->host) == VAR_1 &&
     !FUNC_6(VAR_6)) {
  VAR_9 = FUNC_4(VAR_6, &VAR_4);
 } else if (FUNC_2(VAR_7)) {
  VAR_9 = FUNC_7(VAR_7, VAR_6);
  FUNC_10(VAR_6);
 } else {
  VAR_9 = FUNC_5(VAR_6, VAR_3);
 }

 if (FUNC_9(FUNC_8(VAR_2, &VAR_8->sd_flags)))
  return -VAR_0;

 return VAR_9;
}
