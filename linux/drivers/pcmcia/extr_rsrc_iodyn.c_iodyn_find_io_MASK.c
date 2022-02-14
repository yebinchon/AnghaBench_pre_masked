
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {unsigned int start; unsigned int flags; int end; } ;
struct pcmcia_socket {TYPE_1__* io; } ;
struct TYPE_2__ {unsigned int InUse; struct resource* res; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 struct resource* FUNC_0 (struct pcmcia_socket*,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_1 (struct resource*,unsigned int,scalar_t__) ;
 scalar_t__ FUNC_2 (struct resource*) ;

__attribute__((used)) static int FUNC_3(struct pcmcia_socket *VAR_4, unsigned int VAR_5,
   unsigned int *VAR_6, unsigned int VAR_7,
   unsigned int VAR_8, struct resource **VAR_9)
{
 int VAR_10, VAR_11 = 0;





 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  if (!VAR_4->io[VAR_10].res)
   continue;

  if (!*VAR_6)
   continue;

  if ((VAR_4->io[VAR_10].res->start & (VAR_8-1)) == *VAR_6)
   return -VAR_0;
 }

 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  struct resource *VAR_12 = VAR_4->io[VAR_10].res;
  unsigned int VAR_13;

  if (VAR_12 && (VAR_12->flags & VAR_2) !=
   (VAR_5 & VAR_2))
   continue;

  if (!VAR_12) {
   if (VAR_8 == 0)
    VAR_8 = 0x10000;

   VAR_12 = VAR_4->io[VAR_10].res = FUNC_0(VAR_4, *VAR_6,
        VAR_7, VAR_8);
   if (!VAR_12)
    return -VAR_1;

   *VAR_6 = VAR_12->start;
   VAR_4->io[VAR_10].res->flags =
    ((VAR_12->flags & ~VAR_2) |
     (VAR_5 & VAR_2));
   VAR_4->io[VAR_10].InUse = VAR_7;
   *VAR_9 = VAR_12;
   return 0;
  }


  VAR_13 = VAR_12->end + 1;
  if ((*VAR_6 == 0) || (*VAR_6 == VAR_13)) {
   if (FUNC_1(VAR_4->io[VAR_10].res, VAR_12->start,
         FUNC_2(VAR_12) + VAR_7))
    continue;
   *VAR_6 = VAR_13;
   VAR_4->io[VAR_10].InUse += VAR_7;
   *VAR_9 = VAR_12;
   return 0;
  }


  VAR_13 = VAR_12->start - VAR_7;
  if ((*VAR_6 == 0) || (*VAR_6 == VAR_13)) {
   if (FUNC_1(VAR_4->io[VAR_10].res,
         VAR_12->start - VAR_7,
         FUNC_2(VAR_12) + VAR_7))
    continue;
   *VAR_6 = VAR_13;
   VAR_4->io[VAR_10].InUse += VAR_7;
   *VAR_9 = VAR_12;
   return 0;
  }
 }

 return -VAR_1;
}
