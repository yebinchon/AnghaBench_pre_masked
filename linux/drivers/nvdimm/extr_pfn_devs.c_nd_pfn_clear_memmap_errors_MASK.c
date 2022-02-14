
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long u64 ;
struct nd_region {scalar_t__ ndr_start; int bb; } ;
struct nd_pfn_sb {int dataoff; } ;
struct TYPE_5__ {int parent; } ;
struct nd_pfn {scalar_t__ mode; TYPE_2__ dev; struct nd_pfn_sb* pfn_sb; struct nd_namespace_common* ndns; } ;
struct TYPE_4__ {scalar_t__ start; } ;
struct nd_namespace_io {TYPE_1__ res; } ;
struct nd_namespace_common {int dev; } ;
typedef int sector_t ;


 unsigned long FUNC_0 (int,int ) ;
 unsigned long FUNC_1 (scalar_t__,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int,int,int*,int*) ;
 int FUNC_4 (TYPE_2__*,char*,int,int) ;
 int FUNC_5 (TYPE_2__*,char*,int,int) ;
 int FUNC_6 (int ) ;
 unsigned long FUNC_7 (unsigned long,int ) ;
 int FUNC_8 (struct nd_namespace_common*,unsigned long,void*,unsigned long,int ) ;
 void* FUNC_9 (int ) ;
 struct nd_namespace_io* FUNC_10 (int *) ;
 struct nd_region* FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct nd_pfn *VAR_3)
{
 struct nd_region *VAR_4 = FUNC_11(VAR_3->dev.parent);
 struct nd_namespace_common *VAR_5 = VAR_3->ndns;
 void *VAR_6 = FUNC_9(FUNC_2(0));
 struct nd_pfn_sb *VAR_7 = VAR_3->pfn_sb;
 int VAR_8, VAR_9, VAR_10, VAR_11;
 sector_t VAR_12, VAR_13;
 struct nd_namespace_io *VAR_14;

 if (VAR_3->mode != VAR_1)
  return 0;

 VAR_14 = FUNC_10(&VAR_5->dev);
 VAR_13 = (VAR_2 + sizeof(*VAR_7)) >> 9;
 VAR_9 = (FUNC_6(VAR_7->dataoff) >> 9) - VAR_13;

 do {
  unsigned long VAR_15;
  u64 VAR_16;

  VAR_11 = FUNC_3(&VAR_4->bb, VAR_13,
    VAR_9, &VAR_12, &VAR_8);
  if (VAR_11) {
   FUNC_4(&VAR_3->dev, "meta: %x badblocks at %llx\n",
     VAR_8, VAR_12);
   VAR_16 = FUNC_1((VAR_4->ndr_start
     + (VAR_12 << 9)) - VAR_14->res.start,
     VAR_0);
   VAR_15 = FUNC_0(VAR_8 << 9, VAR_0);
   while (VAR_15) {
    unsigned long VAR_17 = FUNC_7(VAR_15, VAR_0);

    VAR_10 = FUNC_8(VAR_5, VAR_16, VAR_6,
       VAR_17, 0);
    if (VAR_10)
     break;

    VAR_15 -= VAR_17;
    VAR_16 += VAR_17;
   }
   if (VAR_10) {
    FUNC_5(&VAR_3->dev,
     "error clearing %x badblocks at %llx\n",
     VAR_8, VAR_12);
    return VAR_10;
   }
  }
 } while (VAR_11);

 return 0;
}
