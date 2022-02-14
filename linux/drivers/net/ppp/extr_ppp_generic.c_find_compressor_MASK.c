
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct compressor_entry {struct compressor* comp; } ;
struct compressor {int owner; } ;


 int VAR_0 ;
 struct compressor_entry* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static struct compressor *
FUNC_4(int VAR_1)
{
 struct compressor_entry *VAR_2;
 struct compressor *VAR_3 = ((void*)0);

 FUNC_1(&VAR_0);
 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2) {
  VAR_3 = VAR_2->comp;
  if (!FUNC_3(VAR_3->owner))
   VAR_3 = ((void*)0);
 }
 FUNC_2(&VAR_0);
 return VAR_3;
}
