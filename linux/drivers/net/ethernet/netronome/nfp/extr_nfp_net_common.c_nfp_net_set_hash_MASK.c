
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_meta_parsed {int hash; int hash_type; } ;
struct net_device {int features; } ;
typedef int __be32 ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct net_device *VAR_3, struct nfp_meta_parsed *VAR_4,
   unsigned int VAR_5, __be32 *VAR_6)
{
 if (!(VAR_3->features & VAR_0))
  return;

 switch (VAR_5) {
 case 130:
 case 129:
 case 128:
  VAR_4->hash_type = VAR_1;
  break;
 default:
  VAR_4->hash_type = VAR_2;
  break;
 }

 VAR_4->hash = FUNC_0(VAR_6);
}
