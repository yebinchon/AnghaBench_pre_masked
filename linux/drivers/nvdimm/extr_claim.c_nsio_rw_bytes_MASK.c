
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int start; } ;
struct nd_namespace_io {int size; int addr; int bb; TYPE_1__ res; } ;
struct TYPE_6__ {int parent; } ;
struct nd_namespace_common {TYPE_2__ dev; } ;
typedef int sector_t ;
typedef int resource_size_t ;


 unsigned int FUNC_0 (size_t,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (size_t,int) ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int,size_t) ;
 int FUNC_3 (int *,int,long) ;
 int FUNC_4 (TYPE_2__*,int,char*) ;
 int FUNC_5 (int *,int,unsigned int) ;
 int FUNC_6 (int,void*,size_t) ;
 scalar_t__ FUNC_7 (void*,int,size_t) ;
 int FUNC_8 () ;
 long FUNC_9 (TYPE_2__*,int,size_t) ;
 int FUNC_10 (int ,int *) ;
 struct nd_namespace_io* FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct nd_namespace_common *VAR_4,
  resource_size_t VAR_5, void *VAR_6, size_t VAR_7, int VAR_8,
  unsigned long VAR_9)
{
 struct nd_namespace_io *VAR_10 = FUNC_11(&VAR_4->dev);
 unsigned int VAR_11 = FUNC_0(VAR_7 + (VAR_5 & (512 - 1)), 512);
 sector_t VAR_12 = VAR_5 >> 9;
 int VAR_13 = 0, VAR_14 = 0;

 if (FUNC_13(!VAR_7))
  return 0;

 if (FUNC_13(VAR_5 + VAR_7 > VAR_10->size)) {
  FUNC_4(&VAR_4->dev, 1, "request out of range\n");
  return -VAR_0;
 }

 if (VAR_8 == VAR_3) {
  if (FUNC_13(FUNC_5(&VAR_10->bb, VAR_12, VAR_11)))
   return -VAR_1;
  if (FUNC_7(VAR_6, VAR_10->addr + VAR_5, VAR_7) != 0)
   return -VAR_1;
  return 0;
 }

 if (FUNC_13(FUNC_5(&VAR_10->bb, VAR_12, VAR_11))) {
  if (FUNC_1(VAR_5, 512) && FUNC_1(VAR_7, 512)
    && !(VAR_9 & VAR_2)) {
   long VAR_15;

   FUNC_8();
   VAR_15 = FUNC_9(&VAR_4->dev,
     VAR_10->res.start + VAR_5, VAR_7);
   if (VAR_15 < VAR_7)
    VAR_13 = -VAR_1;
   if (VAR_15 > 0 && VAR_15 / 512) {
    VAR_15 /= 512;
    FUNC_3(&VAR_10->bb, VAR_12, VAR_15);
   }
   FUNC_2(VAR_10->addr + VAR_5, VAR_7);
  } else
   VAR_13 = -VAR_1;
 }

 FUNC_6(VAR_10->addr + VAR_5, VAR_6, VAR_7);
 VAR_14 = FUNC_10(FUNC_12(VAR_4->dev.parent), ((void*)0));
 if (VAR_14)
  VAR_13 = VAR_14;

 return VAR_13;
}
