
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_table {int dummy; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 struct sg_table* FUNC_0 (int) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (struct sg_table*) ;
 struct sg_table* FUNC_2 (int,int ) ;
 int FUNC_3 (struct sg_table*,struct page**,unsigned int,int ,unsigned int,int ) ;

__attribute__((used)) static struct sg_table *
FUNC_4(struct page **VAR_3, unsigned int VAR_4)
{
 struct sg_table *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
 if (!VAR_5) {
  VAR_6 = -VAR_0;
  goto out;
 }

 VAR_6 = FUNC_3(VAR_5, VAR_3, VAR_4, 0,
     VAR_4 << VAR_2,
     VAR_1);
 if (VAR_6)
  goto out;

 return VAR_5;

out:
 FUNC_1(VAR_5);
 return FUNC_0(VAR_6);
}
