
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pdr {int dummy; } ;
struct pdi {int * data; } ;
struct hermes {int dummy; } ;
typedef int __le16 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hermes*,struct pdr const*,struct pdi const*,void const*) ;
 scalar_t__ FUNC_1 (struct pdi const*) ;
 size_t FUNC_2 (struct pdi const*) ;

int FUNC_3(struct hermes *VAR_1,
       const char *VAR_2,
       const void *VAR_3,
       const __le16 *VAR_4,
       const void *VAR_5)
{
 int VAR_6;
 const struct pdi *VAR_7;
 const struct pdr *VAR_8;

 VAR_8 = (const struct pdr *) VAR_2;
 VAR_5 -= sizeof(struct pdi);


 VAR_7 = (const struct pdi *) (VAR_4 + 2);
 while (((void *) VAR_7 <= VAR_5) &&
        (FUNC_1(VAR_7) != VAR_0)) {
  VAR_6 = FUNC_0(VAR_1, VAR_8, VAR_7, VAR_3);
  if (VAR_6)
   return VAR_6;


  VAR_7 = (const struct pdi *) &VAR_7->data[FUNC_2(VAR_7)];
 }
 return 0;
}
