
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct proto {int dummy; } ;
struct ppp {struct proto* protos; } ;
struct net_device {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;



 struct ppp* FUNC_0 (struct net_device*) ;

__attribute__((used)) static inline struct proto* FUNC_1(struct net_device *VAR_3, u16 VAR_4)
{
 struct ppp *VAR_5 = FUNC_0(VAR_3);

 switch (VAR_4) {
 case 128:
  return &VAR_5->protos[VAR_2];
 case 130:
  return &VAR_5->protos[VAR_0];
 case 129:
  return &VAR_5->protos[VAR_1];
 default:
  return ((void*)0);
 }
}
