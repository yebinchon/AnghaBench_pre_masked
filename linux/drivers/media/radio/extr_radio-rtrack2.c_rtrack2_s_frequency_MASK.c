
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radio_isa_card {int io; int mute; } ;


 int FUNC_0 (struct radio_isa_card*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct radio_isa_card*) ;

__attribute__((used)) static int FUNC_4(struct radio_isa_card *VAR_0, u32 VAR_1)
{
 int VAR_2;

 VAR_1 = VAR_1 / 200 + 856;

 FUNC_1(0xc8, VAR_0->io);
 FUNC_1(0xc9, VAR_0->io);
 FUNC_1(0xc9, VAR_0->io);

 for (VAR_2 = 0; VAR_2 < 10; VAR_2++)
  FUNC_3(VAR_0);

 for (VAR_2 = 14; VAR_2 >= 0; VAR_2--)
  if (VAR_1 & (1 << VAR_2))
   FUNC_0(VAR_0);
  else
   FUNC_3(VAR_0);

 FUNC_1(0xc8, VAR_0->io);
 FUNC_1(FUNC_2(VAR_0->mute), VAR_0->io);
 return 0;
}
