
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_pageio_descriptor {scalar_t__ pg_error; } ;
struct nfs_page {int dummy; } ;


 int FUNC_0 (struct nfs_pageio_descriptor*,struct nfs_page*) ;
 int FUNC_1 (struct nfs_pageio_descriptor*) ;

__attribute__((used)) static int FUNC_2(struct nfs_pageio_descriptor *VAR_0,
  struct nfs_page *VAR_1)
{
 int VAR_2;

 do {
  VAR_2 = FUNC_0(VAR_0, VAR_1);
  if (VAR_2)
   break;
  if (VAR_0->pg_error < 0)
   break;
  VAR_2 = FUNC_1(VAR_0);
 } while (VAR_2);

 return VAR_2;
}
