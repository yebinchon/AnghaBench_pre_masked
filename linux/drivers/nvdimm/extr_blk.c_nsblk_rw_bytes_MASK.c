
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_namespace_common {int dev; } ;
struct nd_namespace_blk {scalar_t__ size; } ;
struct nd_blk_region {int (* do_io ) (struct nd_blk_region*,scalar_t__,void*,size_t,int) ;} ;
typedef scalar_t__ resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int,char*) ;
 int FUNC_1 (struct nd_blk_region*,scalar_t__,void*,size_t,int) ;
 scalar_t__ FUNC_2 (struct nd_namespace_blk*,scalar_t__,size_t) ;
 struct nd_namespace_blk* FUNC_3 (int *) ;
 struct nd_blk_region* FUNC_4 (struct nd_namespace_blk*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct nd_namespace_common *VAR_3,
  resource_size_t VAR_4, void *VAR_5, size_t VAR_6, int VAR_7,
  unsigned long VAR_8)
{
 struct nd_namespace_blk *VAR_9 = FUNC_3(&VAR_3->dev);
 struct nd_blk_region *VAR_10 = FUNC_4(VAR_9);
 resource_size_t VAR_11;

 VAR_11 = FUNC_2(VAR_9, VAR_4, VAR_6);

 if (FUNC_5(VAR_4 + VAR_6 > VAR_9->size)) {
  FUNC_0(&VAR_3->dev, 1, "request out of range\n");
  return -VAR_0;
 }

 if (VAR_11 == VAR_2)
  return -VAR_1;

 return VAR_10->do_io(VAR_10, VAR_11, VAR_5, VAR_6, VAR_7);
}
