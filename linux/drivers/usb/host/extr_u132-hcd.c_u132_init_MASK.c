
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct u132 {int num_ports; int next_statechange; } ;
struct TYPE_2__ {int a; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct u132*) ;
 TYPE_1__ VAR_6 ;
 int FUNC_1 (struct u132*) ;
 int FUNC_2 (struct u132*,int,int*) ;
 int FUNC_3 (struct u132*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct u132 *VAR_7)
{
 int VAR_8;
 u32 VAR_9;
 FUNC_1(VAR_7);
 VAR_7->next_statechange = VAR_5;
 VAR_8 = FUNC_3(VAR_7, VAR_4, VAR_2);
 if (VAR_8)
  return VAR_8;
 VAR_8 = FUNC_2(VAR_7, VAR_9, &VAR_9);
 if (VAR_8)
  return VAR_8;
 if (VAR_7->num_ports == 0) {
  u32 VAR_10 = -1;
  VAR_8 = FUNC_2(VAR_7, VAR_6.a, &VAR_10);
  if (VAR_8)
   return VAR_8;
  VAR_7->num_ports = VAR_10 & VAR_3;
  VAR_8 = FUNC_0(VAR_7);
  if (VAR_8)
   return VAR_8;
 }
 if (VAR_7->num_ports > VAR_1)
  return -VAR_0;

 return 0;
}
