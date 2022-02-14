
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int dummy; } ;
struct _io_ops {int _sd_f0_read8; int * _write_port; int * _write_mem; int * _writeN; int * _write32; int * _write16; int * _write8; int * _read_port; int * _read_mem; int * _read32; int * _read16; int * _read8; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

void FUNC_0(struct adapter *VAR_12, struct _io_ops *VAR_13)
{
 VAR_13->_read8 = &VAR_3;
 VAR_13->_read16 = &VAR_1;
 VAR_13->_read32 = &VAR_2;
 VAR_13->_read_mem = &VAR_4;
 VAR_13->_read_port = &VAR_5;

 VAR_13->_write8 = &VAR_8;
 VAR_13->_write16 = &VAR_6;
 VAR_13->_write32 = &VAR_7;
 VAR_13->_writeN = &VAR_9;
 VAR_13->_write_mem = &VAR_10;
 VAR_13->_write_port = &VAR_11;

 VAR_13->_sd_f0_read8 = VAR_0;
}
