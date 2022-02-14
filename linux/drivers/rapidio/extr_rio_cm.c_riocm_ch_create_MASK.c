
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rio_channel {int id; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rio_channel*) ;
 int FUNC_1 (struct rio_channel*) ;
 struct rio_channel* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ,int ) ;

__attribute__((used)) static struct rio_channel *FUNC_4(u16 *VAR_1)
{
 struct rio_channel *VAR_2 = ((void*)0);

 VAR_2 = FUNC_2(*VAR_1);

 if (FUNC_0(VAR_2))
  FUNC_3(VAR_0, "Failed to allocate channel %d (err=%ld)",
       *VAR_1, FUNC_1(VAR_2));
 else
  *VAR_1 = VAR_2->id;

 return VAR_2;
}
