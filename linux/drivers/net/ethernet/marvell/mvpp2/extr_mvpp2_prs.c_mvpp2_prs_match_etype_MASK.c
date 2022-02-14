
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2_prs_entry {int dummy; } ;


 int FUNC_0 (struct mvpp2_prs_entry*,int,unsigned short,int) ;

__attribute__((used)) static void FUNC_1(struct mvpp2_prs_entry *VAR_0, int VAR_1,
      unsigned short VAR_2)
{
 FUNC_0(VAR_0, VAR_1 + 0, VAR_2 >> 8, 0xff);
 FUNC_0(VAR_0, VAR_1 + 1, VAR_2 & 0xff, 0xff);
}
