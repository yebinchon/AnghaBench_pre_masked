
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pstore_record {scalar_t__ type; int id; } ;
struct persistent_ram_zone {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct persistent_ram_zone*) ;
 int FUNC_1 (struct persistent_ram_zone*) ;

__attribute__((used)) static struct persistent_ram_zone *
FUNC_2(struct persistent_ram_zone *VAR_1[], int VAR_2,
       struct pstore_record *VAR_3)
{
 struct persistent_ram_zone *VAR_4;


 if (!VAR_1)
  return ((void*)0);

 VAR_4 = VAR_1[VAR_2];
 if (!VAR_4)
  return ((void*)0);


 if (VAR_4->type == VAR_0)
  FUNC_1(VAR_4);

 if (!FUNC_0(VAR_4))
  return ((void*)0);

 VAR_3->type = VAR_4->type;
 VAR_3->id = VAR_2;

 return VAR_4;
}
