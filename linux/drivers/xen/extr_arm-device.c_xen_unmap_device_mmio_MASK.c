
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_remove_from_physmap {scalar_t__ gpfn; int domid; } ;
struct resource {int start; } ;


 unsigned int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct xen_remove_from_physmap*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct resource const*) ;
 scalar_t__ FUNC_4 (struct resource const*) ;

__attribute__((used)) static int FUNC_5(const struct resource *VAR_4,
     unsigned int VAR_5)
{
 unsigned int VAR_6, VAR_7, VAR_8;
 int VAR_9 = 0;
 const struct resource *VAR_10;
 struct xen_remove_from_physmap VAR_11;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  VAR_10 = &VAR_4[VAR_6];
  VAR_8 = FUNC_0(FUNC_3(VAR_10), VAR_3);
  if ((FUNC_4(VAR_10) != VAR_1) || (VAR_8 == 0))
   continue;

  for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
   VAR_11.domid = VAR_0;
   VAR_11.gpfn = FUNC_2(VAR_10->start) + VAR_7;
   VAR_9 = FUNC_1(VAR_2,
        &VAR_11);
   if (VAR_9)
    return VAR_9;
  }
 }

 return VAR_9;
}
