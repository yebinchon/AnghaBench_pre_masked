
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbd_connection {int dummy; } ;
struct scatterlist {int dummy; } ;
struct page {int dummy; } ;


 int FUNC_0 (struct scatterlist*,int) ;
 int FUNC_1 (struct scatterlist*,struct page*,size_t,unsigned long) ;
 int FUNC_2 (struct smbd_connection*,struct scatterlist*,size_t,int) ;

__attribute__((used)) static int FUNC_3(struct smbd_connection *VAR_0, struct page *VAR_1,
  unsigned long VAR_2, size_t VAR_3, int VAR_4)
{
 struct scatterlist VAR_5;

 FUNC_0(&VAR_5, 1);
 FUNC_1(&VAR_5, VAR_1, VAR_3, VAR_2);

 return FUNC_2(VAR_0, &VAR_5, VAR_3, VAR_4);
}
