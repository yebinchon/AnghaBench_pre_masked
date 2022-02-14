
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ispstat_buffer {scalar_t__ const virt_addr; } ;
struct ispstat {scalar_t__ buf_size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ispstat*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ispstat*,struct ispstat_buffer*,scalar_t__ const,int ) ;
 int FUNC_2 (struct ispstat*,struct ispstat_buffer*,scalar_t__ const,int ) ;
 int FUNC_3 (scalar_t__ const,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct ispstat *VAR_5,
          struct ispstat_buffer *VAR_6)
{
 const u32 VAR_7 = FUNC_0(VAR_5) ?
        VAR_5->buf_size + VAR_0 : VAR_5->buf_size;

 FUNC_1(VAR_5, VAR_6, VAR_7, VAR_2);







 FUNC_3(VAR_6->virt_addr, VAR_3, VAR_4);
 FUNC_3(VAR_6->virt_addr + VAR_7, VAR_3, VAR_4);

 FUNC_2(VAR_5, VAR_6, VAR_7,
        VAR_1);
}
