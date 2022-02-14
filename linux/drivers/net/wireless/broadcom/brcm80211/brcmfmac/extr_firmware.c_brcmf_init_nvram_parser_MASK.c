
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nvram_parser {int line; int column; int nvram; int const* data; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (size_t,int ) ;
 int FUNC_1 (struct nvram_parser*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct nvram_parser *VAR_3,
       const u8 *VAR_4, size_t VAR_5)
{
 size_t VAR_6;

 FUNC_1(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->data = VAR_4;

 if (VAR_5 > VAR_0)
  VAR_6 = VAR_0;
 else
  VAR_6 = VAR_5;

 VAR_6 += 1 + 3 + sizeof(u32);
 VAR_3->nvram = FUNC_0(VAR_6, VAR_2);
 if (!VAR_3->nvram)
  return -VAR_1;

 VAR_3->line = 1;
 VAR_3->column = 1;
 return 0;
}
