
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct _io_ops {int _write_port; int _write_mem; int _write32; int _write16; int _write8; int _read_port; int _read32; int _read16; int _read8; } ;


 int FUNC_0 (int *,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void FUNC_1(struct _io_ops *VAR_9)
{
 FUNC_0((u8 *)VAR_9, 0, sizeof(struct _io_ops));
 VAR_9->_read8 = VAR_5;
 VAR_9->_read16 = VAR_3;
 VAR_9->_read32 = VAR_4;
 VAR_9->_read_port = VAR_0;
 VAR_9->_write8 = VAR_8;
 VAR_9->_write16 = VAR_6;
 VAR_9->_write32 = VAR_7;
 VAR_9->_write_mem = VAR_1;
 VAR_9->_write_port = VAR_2;
}
