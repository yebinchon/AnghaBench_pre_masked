
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rndis_message {int msg_len; } ;
struct netvsc_device {char* send_buf; unsigned int send_section_size; int pkt_align; } ;
struct hv_page_buffer {int pfn; int offset; int len; } ;
struct hv_netvsc_packet {int rmsg_pgcnt; int page_buf_cnt; int total_data_buflen; scalar_t__ cp_partial; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,int ,int) ;
 char* FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct netvsc_device *VAR_1,
        unsigned int VAR_2,
        u32 VAR_3,
        struct hv_netvsc_packet *VAR_4,
        struct rndis_message *VAR_5,
        struct hv_page_buffer *VAR_6,
        bool VAR_7)
{
 char *VAR_8 = VAR_1->send_buf;
 char *VAR_9 = VAR_8 + (VAR_2 * VAR_1->send_section_size)
       + VAR_3;
 int VAR_10;
 u32 VAR_11 = 0;
 u32 VAR_12 = VAR_4->cp_partial ? VAR_4->rmsg_pgcnt :
  VAR_4->page_buf_cnt;
 u32 VAR_13;


 VAR_13 = VAR_4->total_data_buflen & (VAR_1->pkt_align - 1);
 if (VAR_7 && VAR_13) {
  VAR_11 = VAR_1->pkt_align - VAR_13;
  VAR_5->msg_len += VAR_11;
  VAR_4->total_data_buflen += VAR_11;
 }

 for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++) {
  char *VAR_14 = FUNC_2(VAR_6[VAR_10].pfn << VAR_0);
  u32 VAR_15 = VAR_6[VAR_10].offset;
  u32 VAR_16 = VAR_6[VAR_10].len;

  FUNC_0(VAR_9, (VAR_14 + VAR_15), VAR_16);
  VAR_9 += VAR_16;
 }

 if (VAR_11)
  FUNC_1(VAR_9, 0, VAR_11);
}
