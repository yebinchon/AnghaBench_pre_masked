
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltq_mfp_pin {unsigned int* func; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(const struct ltq_mfp_pin *VAR_2, unsigned VAR_3)
{
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (VAR_2->func[VAR_4] == VAR_3)
   break;
 }
 if (VAR_4 >= VAR_1)
  return -VAR_0;
 return VAR_4;
}
