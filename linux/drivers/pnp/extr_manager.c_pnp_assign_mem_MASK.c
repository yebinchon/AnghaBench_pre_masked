
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {scalar_t__ start; scalar_t__ end; int flags; } ;
struct pnp_mem {int flags; scalar_t__ size; scalar_t__ min; scalar_t__ align; scalar_t__ max; } ;
struct pnp_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct pnp_dev*,scalar_t__,scalar_t__,int) ;
 int FUNC_1 (struct pnp_dev*,struct resource*) ;
 int FUNC_2 (int *,char*,int,...) ;
 struct resource* FUNC_3 (struct pnp_dev*,int,int ,int) ;

__attribute__((used)) static int FUNC_4(struct pnp_dev *VAR_10, struct pnp_mem *VAR_11, int VAR_12)
{
 struct resource *VAR_13, VAR_14;

 VAR_13 = FUNC_3(VAR_10, VAR_11->flags, VAR_3, VAR_12);
 if (VAR_13) {
  FUNC_2(&VAR_10->dev, "  mem %d already set to %#llx-%#llx "
   "flags %#lx\n", VAR_12, (unsigned long long) VAR_13->start,
   (unsigned long long) VAR_13->end, VAR_13->flags);
  return 0;
 }

 VAR_13 = &VAR_14;
 VAR_13->flags = VAR_11->flags | VAR_1;
 VAR_13->start = 0;
 VAR_13->end = 0;


 if (!(VAR_11->flags & VAR_6))
  VAR_13->flags |= VAR_8;
 if (VAR_11->flags & VAR_4)
  VAR_13->flags |= VAR_7;
 if (VAR_11->flags & VAR_5)
  VAR_13->flags |= VAR_9;

 if (!VAR_11->size) {
  VAR_13->flags |= VAR_2;
  FUNC_2(&VAR_10->dev, "  mem %d disabled\n", VAR_12);
  goto __add;
 }

 VAR_13->start = VAR_11->min;
 VAR_13->end = VAR_13->start + VAR_11->size - 1;

 while (!FUNC_1(VAR_10, VAR_13)) {
  VAR_13->start += VAR_11->align;
  VAR_13->end = VAR_13->start + VAR_11->size - 1;
  if (VAR_13->start > VAR_11->max || !VAR_11->align) {
   FUNC_2(&VAR_10->dev, "  couldn't assign mem %d "
    "(min %#llx max %#llx)\n", VAR_12,
    (unsigned long long) VAR_11->min,
    (unsigned long long) VAR_11->max);
   return -VAR_0;
  }
 }

__add:
 FUNC_0(VAR_10, VAR_13->start, VAR_13->end, VAR_13->flags);
 return 0;
}
