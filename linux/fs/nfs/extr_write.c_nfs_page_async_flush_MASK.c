
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct nfs_pageio_descriptor {int pg_error; } ;
struct nfs_page {int wb_flags; } ;
struct TYPE_2__ {int host; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nfs_page*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct nfs_page*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 struct nfs_page* FUNC_6 (struct page*) ;
 int FUNC_7 (struct nfs_pageio_descriptor*,struct nfs_page*) ;
 int FUNC_8 (struct nfs_page*) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct nfs_page*,int) ;
 TYPE_1__* FUNC_11 (struct page*) ;
 int FUNC_12 (int ,int *) ;

__attribute__((used)) static int FUNC_13(struct nfs_pageio_descriptor *VAR_3,
    struct page *VAR_4)
{
 struct nfs_page *VAR_5;
 int VAR_6 = 0;

 VAR_5 = FUNC_6(VAR_4);
 if (!VAR_5)
  goto out;
 VAR_6 = FUNC_1(VAR_5);
 if (FUNC_0(VAR_5))
  goto out;

 FUNC_9(VAR_4);
 FUNC_2(FUNC_12(VAR_2, &VAR_5->wb_flags));


 VAR_6 = VAR_3->pg_error;
 if (FUNC_5(VAR_6))
  goto out_launder;

 VAR_6 = 0;
 if (!FUNC_7(VAR_3, VAR_5)) {
  VAR_6 = VAR_3->pg_error;



  if (FUNC_4(VAR_6)) {
   if (FUNC_5(VAR_6))
    goto out_launder;
  } else
   VAR_6 = -VAR_0;
  FUNC_8(VAR_5);
  VAR_3->pg_error = 0;
 } else
  FUNC_3(FUNC_11(VAR_4)->host,
    VAR_1, 1);
out:
 return VAR_6;
out_launder:
 FUNC_10(VAR_5, VAR_6);
 return 0;
}
