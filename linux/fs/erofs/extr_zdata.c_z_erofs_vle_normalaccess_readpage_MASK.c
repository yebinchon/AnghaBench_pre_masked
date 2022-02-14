
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ mpage; } ;
struct z_erofs_decompress_frontend {int headoffset; TYPE_1__ map; int clt; } ;
struct page {scalar_t__ index; TYPE_2__* mapping; } ;
struct inode {int i_sb; } ;
struct file {int dummy; } ;
typedef int erofs_off_t ;
struct TYPE_4__ {struct inode* host; } ;


 struct z_erofs_decompress_frontend FUNC_0 (struct inode* const) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct page*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct z_erofs_decompress_frontend*,struct page*,int *) ;
 int FUNC_8 (int ,int *,int *,int) ;

__attribute__((used)) static int FUNC_9(struct file *VAR_2,
          struct page *VAR_3)
{
 struct inode *const VAR_4 = VAR_3->mapping->host;
 struct z_erofs_decompress_frontend VAR_5 = FUNC_0(VAR_4);
 int VAR_6;
 FUNC_1(VAR_1);

 FUNC_5(VAR_3, 0);

 VAR_5.headoffset = (erofs_off_t)VAR_3->index << VAR_0;

 VAR_6 = FUNC_7(&VAR_5, VAR_3, &VAR_1);
 (void)FUNC_6(&VAR_5.clt);


 FUNC_8(VAR_4->i_sb, &VAR_5.clt, &VAR_1, 1);

 if (VAR_6)
  FUNC_2(VAR_4->i_sb, "failed to read, err [%d]", VAR_6);

 if (VAR_5.map.mpage)
  FUNC_3(VAR_5.map.mpage);


 FUNC_4(&VAR_1);
 return VAR_6;
}
