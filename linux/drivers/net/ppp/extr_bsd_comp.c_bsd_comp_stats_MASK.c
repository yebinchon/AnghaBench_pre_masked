
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct compstat {int bytes_out; int in_count; int inc_packets; int inc_bytes; int comp_packets; int comp_bytes; int unc_packets; int unc_bytes; } ;
struct bsd_db {int bytes_out; int in_count; int incomp_count; int incomp_bytes; int comp_count; int comp_bytes; int uncomp_count; int uncomp_bytes; } ;



__attribute__((used)) static void FUNC_0 (void *VAR_0, struct compstat *VAR_1)
  {
    struct bsd_db *VAR_2 = (struct bsd_db *) VAR_0;

    VAR_1->unc_bytes = VAR_2->uncomp_bytes;
    VAR_1->unc_packets = VAR_2->uncomp_count;
    VAR_1->comp_bytes = VAR_2->comp_bytes;
    VAR_1->comp_packets = VAR_2->comp_count;
    VAR_1->inc_bytes = VAR_2->incomp_bytes;
    VAR_1->inc_packets = VAR_2->incomp_count;
    VAR_1->in_count = VAR_2->in_count;
    VAR_1->bytes_out = VAR_2->bytes_out;
  }
