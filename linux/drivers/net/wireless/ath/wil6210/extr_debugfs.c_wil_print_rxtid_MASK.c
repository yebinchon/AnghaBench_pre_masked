
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wil_tid_ampdu_rx {int head_seq_num; int ssn; int buf_size; unsigned long long drop_dup; unsigned long long drop_old; unsigned long long drop_dup_mcast; int ssn_last_drop; int total; scalar_t__* reorder_buf; } ;
struct seq_file {int dummy; } ;


 int FUNC_0 (struct seq_file*,char*,int,...) ;

__attribute__((used)) static void FUNC_1(struct seq_file *VAR_0, struct wil_tid_ampdu_rx *VAR_1)
{
 int VAR_2;
 u16 VAR_3 = ((VAR_1->head_seq_num - VAR_1->ssn) & 0xfff) % VAR_1->buf_size;
 unsigned long long VAR_4 = VAR_1->drop_dup, VAR_5 = VAR_1->drop_old;
 unsigned long long VAR_6 = VAR_1->drop_dup_mcast;

 FUNC_0(VAR_0, "([%2d]) 0x%03x [", VAR_1->buf_size, VAR_1->head_seq_num);
 for (VAR_2 = 0; VAR_2 < VAR_1->buf_size; VAR_2++) {
  if (VAR_2 == VAR_3)
   FUNC_0(VAR_0, "%c", VAR_1->reorder_buf[VAR_2] ? 'O' : '|');
  else
   FUNC_0(VAR_0, "%c", VAR_1->reorder_buf[VAR_2] ? '*' : '_');
 }
 FUNC_0(VAR_0,
     "] total %llu drop %llu (dup %llu + old %llu + dup mcast %llu) last 0x%03x\n",
     VAR_1->total, VAR_4 + VAR_5 + VAR_6, VAR_4,
     VAR_5, VAR_6, VAR_1->ssn_last_drop);
}
