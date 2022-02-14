
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned long u64 ;
typedef scalar_t__ u32 ;
struct page {int dummy; } ;
struct nd_region {int dev; scalar_t__ ro; } ;
struct nd_pfn_sb {void* checksum; void* page_size; void* page_struct_size; void* align; void* end_trunc; void* version_minor; void* version_major; int parent_uuid; int uuid; int signature; void* npfns; void* dataoff; void* mode; } ;
struct TYPE_7__ {int parent; } ;
struct nd_pfn {scalar_t__ align; scalar_t__ mode; char const* uuid; TYPE_2__ dev; struct nd_pfn_sb* pfn_sb; struct nd_namespace_common* ndns; } ;
struct TYPE_6__ {scalar_t__ start; } ;
struct nd_namespace_io {TYPE_1__ res; } ;
struct nd_namespace_common {int dev; } ;
struct nd_gen_sb {int dummy; } ;
typedef scalar_t__ resource_size_t ;
typedef scalar_t__ phys_addr_t ;


 scalar_t__ FUNC_0 (scalar_t__,unsigned long) ;
 scalar_t__ FUNC_1 (scalar_t__,unsigned long) ;
 int FUNC_2 (int) ;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 char* VAR_9 ;
 int VAR_10 ;
 unsigned long FUNC_3 (scalar_t__) ;
 unsigned long VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 void* FUNC_4 (int) ;
 void* FUNC_5 (scalar_t__) ;
 void* FUNC_6 (unsigned long) ;
 int FUNC_7 (TYPE_2__*,char*,int ) ;
 int FUNC_8 (TYPE_2__*,char*,int ) ;
 int FUNC_9 (int *) ;
 struct nd_pfn_sb* FUNC_10 (TYPE_2__*,int,int ) ;
 scalar_t__ FUNC_11 (TYPE_2__*) ;
 unsigned long FUNC_12 (scalar_t__,unsigned long) ;
 int FUNC_13 (int ,char const*,int) ;
 int FUNC_14 (struct nd_pfn_sb*,int ,int) ;
 char const* FUNC_15 (int *) ;
 int FUNC_16 (struct nd_pfn*,char const*) ;
 unsigned long FUNC_17 (struct nd_gen_sb*) ;
 int FUNC_18 (struct nd_namespace_common*,int ,struct nd_pfn_sb*,int,int ) ;
 scalar_t__ FUNC_19 (TYPE_1__*) ;
 struct nd_namespace_io* FUNC_20 (int *) ;
 struct nd_region* FUNC_21 (int ) ;

__attribute__((used)) static int FUNC_22(struct nd_pfn *VAR_14)
{
 struct nd_namespace_common *VAR_15 = VAR_14->ndns;
 struct nd_namespace_io *VAR_16 = FUNC_20(&VAR_15->dev);
 resource_size_t VAR_17, VAR_18;
 struct nd_region *VAR_19;
 unsigned long VAR_20, VAR_21;
 u32 VAR_22;
 struct nd_pfn_sb *VAR_23;
 phys_addr_t VAR_24;
 const char *VAR_25;
 u64 VAR_26;
 int VAR_27;

 VAR_23 = FUNC_10(&VAR_14->dev, sizeof(*VAR_23), VAR_4);
 if (!VAR_23)
  return -VAR_2;

 VAR_14->pfn_sb = VAR_23;
 if (FUNC_11(&VAR_14->dev))
  VAR_25 = VAR_0;
 else
  VAR_25 = VAR_9;

 VAR_27 = FUNC_16(VAR_14, VAR_25);
 if (VAR_27 != -VAR_1)
  return VAR_27;

                             ;
 FUNC_14(VAR_23, 0, sizeof(*VAR_23));

 VAR_19 = FUNC_21(VAR_14->dev.parent);
 if (VAR_19->ro) {
  FUNC_8(&VAR_14->dev,
    "%s is read-only, unable to init metadata\n",
    FUNC_9(&VAR_19->dev));
  return -VAR_3;
 }







 VAR_17 = VAR_16->res.start;
 VAR_18 = FUNC_19(&VAR_16->res);
 VAR_20 = FUNC_3(VAR_18 - VAR_13);
 VAR_21 = FUNC_12(VAR_14->align, (1UL << VAR_11));
 VAR_22 = VAR_17 + VAR_18 - FUNC_1(VAR_17 + VAR_18, VAR_21);
 if (VAR_14->mode == VAR_7) {
  FUNC_2(sizeof(struct page) > VAR_5);
  VAR_24 = FUNC_0(VAR_17 + VAR_13 + VAR_5 * VAR_20, VAR_21)
   - VAR_17;
 } else if (VAR_14->mode == VAR_8)
  VAR_24 = FUNC_0(VAR_17 + VAR_13, VAR_21) - VAR_17;
 else
  return -VAR_3;

 if (VAR_24 >= VAR_18) {
  FUNC_7(&VAR_14->dev, "%s unable to satisfy requested alignment\n",
    FUNC_9(&VAR_15->dev));
  return -VAR_3;
 }

 VAR_20 = FUNC_3(VAR_18 - VAR_24 - VAR_22);
 VAR_23->mode = FUNC_5(VAR_14->mode);
 VAR_23->dataoff = FUNC_6(VAR_24);
 VAR_23->npfns = FUNC_6(VAR_20);
 FUNC_13(VAR_23->signature, VAR_25, VAR_10);
 FUNC_13(VAR_23->uuid, VAR_14->uuid, 16);
 FUNC_13(VAR_23->parent_uuid, FUNC_15(&VAR_15->dev), 16);
 VAR_23->version_major = FUNC_4(1);
 VAR_23->version_minor = FUNC_4(4);
 VAR_23->end_trunc = FUNC_5(VAR_22);
 VAR_23->align = FUNC_5(VAR_14->align);
 VAR_23->page_struct_size = FUNC_4(VAR_5);
 VAR_23->page_size = FUNC_5(VAR_6);
 VAR_26 = FUNC_17((struct nd_gen_sb *) VAR_23);
 VAR_23->checksum = FUNC_6(VAR_26);

 return FUNC_18(VAR_15, VAR_12, VAR_23, sizeof(*VAR_23), 0);
}
