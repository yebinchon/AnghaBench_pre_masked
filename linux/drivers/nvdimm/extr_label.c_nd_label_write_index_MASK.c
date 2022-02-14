
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
typedef int u32 ;
struct nvdimm_drvdata {int ns_next; int ns_current; } ;
struct nd_namespace_index {int labelsize; void* myoff; void* checksum; int * free; void* minor; void* major; void* nslot; void* labeloff; void* otheroff; void* mysize; void* seq; int flags; int sig; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (int) ;
 void* FUNC_4 (unsigned long) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int,unsigned long*) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int *,int,int) ;
 unsigned long FUNC_10 (struct nd_namespace_index*,unsigned long,int) ;
 scalar_t__ FUNC_11 (struct nvdimm_drvdata*) ;
 int FUNC_12 (struct nvdimm_drvdata*,int ,struct nd_namespace_index*) ;
 int FUNC_13 (int) ;
 int FUNC_14 (struct nvdimm_drvdata*) ;
 int FUNC_15 (struct nvdimm_drvdata*,int ,struct nd_namespace_index*,unsigned long) ;
 unsigned long FUNC_16 (struct nvdimm_drvdata*) ;
 int FUNC_17 (struct nvdimm_drvdata*) ;
 int FUNC_18 (struct nvdimm_drvdata*) ;
 struct nd_namespace_index* FUNC_19 (struct nvdimm_drvdata*,int) ;

__attribute__((used)) static int FUNC_20(struct nvdimm_drvdata *VAR_4, int VAR_5, u32 VAR_6,
  unsigned long VAR_7)
{
 struct nd_namespace_index *VAR_8;
 unsigned long VAR_9;
 u64 VAR_10;
 u32 VAR_11;
 int VAR_12;

 VAR_8 = FUNC_19(VAR_4, VAR_5);
 if (VAR_7 & VAR_1)
  VAR_11 = FUNC_14(VAR_4);
 else
  VAR_11 = FUNC_5(VAR_8->nslot);

 FUNC_8(VAR_8->sig, VAR_2, VAR_3);
 FUNC_9(&VAR_8->flags, 0, 3);
 VAR_8->labelsize = FUNC_17(VAR_4) >> 8;
 VAR_8->seq = FUNC_3(VAR_6);
 VAR_9 = (unsigned long) VAR_8
  - (unsigned long) FUNC_19(VAR_4, 0);
 VAR_8->myoff = FUNC_4(VAR_9);
 VAR_8->mysize = FUNC_4(FUNC_16(VAR_4));
 VAR_9 = (unsigned long) FUNC_19(VAR_4,
   FUNC_13(VAR_5))
  - (unsigned long) FUNC_19(VAR_4, 0);
 VAR_8->otheroff = FUNC_4(VAR_9);
 VAR_9 = (unsigned long) FUNC_11(VAR_4)
  - (unsigned long) FUNC_19(VAR_4, 0);
 VAR_8->labeloff = FUNC_4(VAR_9);
 VAR_8->nslot = FUNC_3(VAR_11);
 VAR_8->major = FUNC_2(1);
 if (FUNC_17(VAR_4) < 256)
  VAR_8->minor = FUNC_2(1);
 else
  VAR_8->minor = FUNC_2(2);
 VAR_8->checksum = FUNC_4(0);
 if (VAR_7 & VAR_1) {
  unsigned long *VAR_13 = (unsigned long *) VAR_8->free;
  u32 VAR_14 = FUNC_0(VAR_11, VAR_0);
  int VAR_15, VAR_16;

  FUNC_9(VAR_8->free, 0xff, VAR_14 / 8);
  for (VAR_16 = 0, VAR_15 = VAR_14 - VAR_11; VAR_16 < VAR_15; VAR_16++)
   FUNC_7(VAR_11 + VAR_16, VAR_13);
 }
 VAR_10 = FUNC_10(VAR_8, FUNC_16(VAR_4), 1);
 VAR_8->checksum = FUNC_4(VAR_10);
 VAR_12 = FUNC_15(VAR_4, FUNC_6(VAR_8->myoff),
   VAR_8, FUNC_16(VAR_4));
 if (VAR_12 < 0)
  return VAR_12;

 if (VAR_7 & VAR_1)
  return 0;


 FUNC_1(VAR_5 != VAR_4->ns_next);
 FUNC_12(VAR_4, FUNC_18(VAR_4), VAR_8);
 VAR_4->ns_current = FUNC_13(VAR_4->ns_current);
 VAR_4->ns_next = FUNC_13(VAR_4->ns_next);
 FUNC_1(VAR_4->ns_current == VAR_4->ns_next);

 return 0;
}
