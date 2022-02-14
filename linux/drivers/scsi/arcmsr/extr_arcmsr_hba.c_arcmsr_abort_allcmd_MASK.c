
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct AdapterControlBlock {int adapter_type; } ;







 int FUNC_0 (struct AdapterControlBlock*) ;
 int FUNC_1 (struct AdapterControlBlock*) ;
 int FUNC_2 (struct AdapterControlBlock*) ;
 int FUNC_3 (struct AdapterControlBlock*) ;
 int FUNC_4 (struct AdapterControlBlock*) ;

__attribute__((used)) static uint8_t FUNC_5(struct AdapterControlBlock *VAR_0)
{
 uint8_t VAR_1 = 0;
 switch (VAR_0->adapter_type) {
 case 132: {
  VAR_1 = FUNC_0(VAR_0);
  }
  break;

 case 131: {
  VAR_1 = FUNC_1(VAR_0);
  }
  break;

 case 130: {
  VAR_1 = FUNC_2(VAR_0);
  }
  break;

 case 129:
  VAR_1 = FUNC_3(VAR_0);
  break;
 case 128:
  VAR_1 = FUNC_4(VAR_0);
  break;
 }
 return VAR_1;
}
