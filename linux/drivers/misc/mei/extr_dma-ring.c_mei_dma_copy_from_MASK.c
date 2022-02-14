
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mei_device {TYPE_1__* dr_dscr; } ;
struct TYPE_2__ {unsigned char* vaddr; } ;


 size_t VAR_0 ;
 int FUNC_0 (unsigned char*,unsigned char*,size_t) ;

__attribute__((used)) static size_t FUNC_1(struct mei_device *VAR_1, unsigned char *VAR_2,
    u32 VAR_3, u32 VAR_4)
{
 unsigned char *VAR_5 = VAR_1->dr_dscr[VAR_0].vaddr;

 size_t VAR_6 = VAR_3 << 2;
 size_t VAR_7 = VAR_4 << 2;

 FUNC_0(VAR_2, VAR_5 + VAR_6, VAR_7);

 return VAR_7;
}
