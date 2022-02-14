
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpss_pg_frame_size {int hlpfr; int pplen; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;

void FUNC_1(struct vpss_pg_frame_size VAR_1)
{
 int VAR_2 = ((VAR_1.hlpfr >> 1) - 1) << 16;

 VAR_2 |= (VAR_1.pplen - 1);
 FUNC_0(VAR_2, VAR_0);
}
