
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct pdr {scalar_t__ next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct pdr const*) ;
 int FUNC_1 (struct pdr const*) ;

__attribute__((used)) static const struct pdr *
FUNC_2(const struct pdr *VAR_1, u32 VAR_2, const void *VAR_3)
{
 const struct pdr *VAR_4 = VAR_1;

 VAR_3 -= sizeof(struct pdr);

 while (((void *) VAR_4 <= VAR_3) &&
        (FUNC_0(VAR_4) != VAR_0)) {





  if (FUNC_1(VAR_4) < 2)
   return ((void*)0);


  if (FUNC_0(VAR_4) == VAR_2)
   return VAR_4;

  VAR_4 = (struct pdr *) VAR_4->next;
 }
 return ((void*)0);
}
