
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ent {int id; scalar_t__ type; int authname; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static uint32_t
FUNC_2(struct ent *VAR_2)
{
 uint32_t VAR_3;

 VAR_3 = FUNC_1(VAR_2->authname, VAR_0);
 VAR_3 = FUNC_0(VAR_3 ^ VAR_2->id, VAR_0);


 if (VAR_2->type == VAR_1)
  VAR_3 ^= 1;

 return VAR_3;
}
