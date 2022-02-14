
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dispc_features {int dummy; } ;
 struct dispc_features const VAR_0 ;
 struct dispc_features const VAR_1 ;
 struct dispc_features const VAR_2 ;
 struct dispc_features const VAR_3 ;
 struct dispc_features const VAR_4 ;
 int FUNC_0 () ;

__attribute__((used)) static const struct dispc_features *FUNC_1(void)
{
 switch (FUNC_0()) {
 case 135:
  return &VAR_0;

 case 134:
  return &VAR_1;

 case 133:
 case 132:
 case 138:
 case 137:
  return &VAR_2;

 case 130:
 case 129:
 case 131:
  return &VAR_3;

 case 128:
 case 136:
  return &VAR_4;

 default:
  return ((void*)0);
 }
}
