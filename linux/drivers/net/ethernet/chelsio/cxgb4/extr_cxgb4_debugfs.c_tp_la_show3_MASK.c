
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct seq_file {int dummy; } ;
struct field_desc {char* member_0; int member_1; int member_2; } ;


 unsigned long long const FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct seq_file*,unsigned long long const,struct field_desc*) ;
 int FUNC_2 (struct seq_file*,char) ;
 struct field_desc* VAR_1 ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_2, void *VAR_3, int VAR_4)
{
 static struct field_desc VAR_5[] = {
  { "CplCmdIn", 56, 8 },
  { "CplCmdOut", 48, 8 },
  { "ESynOut", 47, 1 },
  { "EAckOut", 46, 1 },
  { "EFinOut", 45, 1 },
  { "ERstOut", 44, 1 },
  { "SynIn", 43, 1 },
  { "AckIn", 42, 1 },
  { "FinIn", 41, 1 },
  { "RstIn", 40, 1 },
  { "DataIn", 39, 1 },
  { "DataInVld", 38, 1 },
  { "PadIn", 37, 1 },
  { "RxBufEmpty", 36, 1 },
  { "RxDdp", 35, 1 },
  { "RxFbCongestion", 34, 1 },
  { "TxFbCongestion", 33, 1 },
  { "TxPktSumSrdy", 32, 1 },
  { "RcfUlpType", 28, 4 },
  { "Eread", 27, 1 },
  { "Ebypass", 26, 1 },
  { "Esave", 25, 1 },
  { "Static0", 24, 1 },
  { "Cread", 23, 1 },
  { "Cbypass", 22, 1 },
  { "Csave", 21, 1 },
  { "CPktOut", 20, 1 },
  { "RxPagePoolFull", 18, 2 },
  { "RxLpbkPkt", 17, 1 },
  { "TxLpbkPkt", 16, 1 },
  { "RxVfValid", 15, 1 },
  { "SynLearned", 14, 1 },
  { "SetDelEntry", 13, 1 },
  { "SetInvEntry", 12, 1 },
  { "CpcmdDvld", 11, 1 },
  { "CpcmdSave", 10, 1 },
  { "RxPstructsFull", 8, 2 },
  { "EpcmdDvld", 7, 1 },
  { "EpcmdFlush", 6, 1 },
  { "EpcmdTrimPrefix", 5, 1 },
  { "EpcmdTrimPostfix", 4, 1 },
  { "ERssIp4Pkt", 3, 1 },
  { "ERssIp6Pkt", 2, 1 },
  { "ERssTcpUdpPkt", 1, 1 },
  { "ERssFceFipPkt", 0, 1 },
  { ((void*)0) }
 };
 static struct field_desc VAR_6[] = {
  { "CplCmdIn", 56, 8 },
  { "MpsVfVld", 55, 1 },
  { "MpsPf", 52, 3 },
  { "MpsVf", 44, 8 },
  { "SynIn", 43, 1 },
  { "AckIn", 42, 1 },
  { "FinIn", 41, 1 },
  { "RstIn", 40, 1 },
  { "DataIn", 39, 1 },
  { "DataInVld", 38, 1 },
  { "PadIn", 37, 1 },
  { "RxBufEmpty", 36, 1 },
  { "RxDdp", 35, 1 },
  { "RxFbCongestion", 34, 1 },
  { "TxFbCongestion", 33, 1 },
  { "TxPktSumSrdy", 32, 1 },
  { "RcfUlpType", 28, 4 },
  { "Eread", 27, 1 },
  { "Ebypass", 26, 1 },
  { "Esave", 25, 1 },
  { "Static0", 24, 1 },
  { "Cread", 23, 1 },
  { "Cbypass", 22, 1 },
  { "Csave", 21, 1 },
  { "CPktOut", 20, 1 },
  { "RxPagePoolFull", 18, 2 },
  { "RxLpbkPkt", 17, 1 },
  { "TxLpbkPkt", 16, 1 },
  { "RxVfValid", 15, 1 },
  { "SynLearned", 14, 1 },
  { "SetDelEntry", 13, 1 },
  { "SetInvEntry", 12, 1 },
  { "CpcmdDvld", 11, 1 },
  { "CpcmdSave", 10, 1 },
  { "RxPstructsFull", 8, 2 },
  { "EpcmdDvld", 7, 1 },
  { "EpcmdFlush", 6, 1 },
  { "EpcmdTrimPrefix", 5, 1 },
  { "EpcmdTrimPostfix", 4, 1 },
  { "ERssIp4Pkt", 3, 1 },
  { "ERssIp6Pkt", 2, 1 },
  { "ERssTcpUdpPkt", 1, 1 },
  { "ERssFceFipPkt", 0, 1 },
  { ((void*)0) }
 };
 const u64 *VAR_7 = VAR_3;

 if (VAR_4)
  FUNC_2(VAR_2, '\n');
 FUNC_1(VAR_2, VAR_7[0], VAR_1);
 if (VAR_4 < (VAR_0 / 2 - 1) || VAR_7[1] != ~0ULL)
  FUNC_1(VAR_2, VAR_7[1], (VAR_7[0] & FUNC_0(17)) ? VAR_6 : VAR_5);
 return 0;
}
