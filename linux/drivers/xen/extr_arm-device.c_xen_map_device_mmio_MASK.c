
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xen_ulong_t ;
typedef int xen_pfn_t ;
struct xen_add_to_physmap_range {unsigned int size; int errs; int idxs; int gpfns; int space; int domid; } ;
struct resource {int start; } ;


 unsigned int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,struct xen_add_to_physmap_range*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int* FUNC_3 (unsigned int,int,int ) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (struct resource const*) ;
 scalar_t__ FUNC_6 (struct resource const*) ;
 int FUNC_7 (int ,int*) ;
 int FUNC_8 (struct resource const*,unsigned int) ;

__attribute__((used)) static int FUNC_9(const struct resource *VAR_7,
          unsigned int VAR_8)
{
 unsigned int VAR_9, VAR_10, VAR_11;
 int VAR_12 = 0;
 const struct resource *VAR_13;
 xen_pfn_t *VAR_14;
 xen_ulong_t *VAR_15;
 int *VAR_16;

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  struct xen_add_to_physmap_range VAR_17 = {
   .domid = VAR_0,
   .space = VAR_4
  };

  VAR_13 = &VAR_7[VAR_9];
  VAR_11 = FUNC_0(FUNC_5(VAR_13), VAR_6);
  if ((FUNC_6(VAR_13) != VAR_3) || (VAR_11 == 0))
   continue;

  VAR_14 = FUNC_3(VAR_11, sizeof(xen_pfn_t), VAR_2);
  VAR_15 = FUNC_3(VAR_11, sizeof(xen_ulong_t), VAR_2);
  VAR_16 = FUNC_3(VAR_11, sizeof(int), VAR_2);
  if (!VAR_14 || !VAR_15 || !VAR_16) {
   FUNC_4(VAR_14);
   FUNC_4(VAR_15);
   FUNC_4(VAR_16);
   VAR_12 = -VAR_1;
   goto unmap;
  }

  for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {





   VAR_14[VAR_10] = FUNC_2(VAR_13->start) + VAR_10;
   VAR_15[VAR_10] = FUNC_2(VAR_13->start) + VAR_10;
  }

  VAR_17.size = VAR_11;

  FUNC_7(VAR_17.gpfns, VAR_14);
  FUNC_7(VAR_17.idxs, VAR_15);
  FUNC_7(VAR_17.errs, VAR_16);

  VAR_12 = FUNC_1(VAR_5, &VAR_17);
  FUNC_4(VAR_14);
  FUNC_4(VAR_15);
  FUNC_4(VAR_16);
  if (VAR_12)
   goto unmap;
 }

 return VAR_12;

unmap:
 FUNC_8(VAR_7, VAR_9);
 return VAR_12;
}
