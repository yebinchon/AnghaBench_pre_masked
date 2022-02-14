
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtsx_chip {scalar_t__ host_cmds_ptr; scalar_t__ host_sg_tbl_ptr; } ;



__attribute__((used)) static inline u8 *FUNC_0(struct rtsx_chip *VAR_0)
{



 return (u8 *)(VAR_0->host_cmds_ptr);

}
