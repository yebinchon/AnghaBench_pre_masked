
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bpf_prog_array_item {struct bpf_prog* prog; } ;
struct bpf_prog_array {struct bpf_prog_array_item* items; } ;
struct bpf_prog {int dummy; } ;
struct TYPE_2__ {struct bpf_prog prog; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct bpf_prog_array* FUNC_0 (int,int ) ;
 TYPE_1__ VAR_4 ;

int FUNC_1(struct bpf_prog_array *VAR_5,
   struct bpf_prog *VAR_6,
   struct bpf_prog *VAR_7,
   struct bpf_prog_array **VAR_8)
{
 int VAR_9, VAR_10 = 0;
 struct bpf_prog_array_item *VAR_11;
 struct bpf_prog_array *VAR_12;
 bool VAR_13 = 0;
 int VAR_14 = 0;




 if (VAR_5) {
  VAR_11 = VAR_5->items;
  for (; VAR_11->prog; VAR_11++) {
   if (VAR_11->prog == VAR_6) {
    VAR_13 = 1;
    continue;
   }
   if (VAR_11->prog != &VAR_4.prog)
    VAR_10++;
   if (VAR_11->prog == VAR_7)
    return -VAR_0;
  }
 }

 if (VAR_6 && !VAR_13)
  return -VAR_1;


 VAR_9 = VAR_10;
 if (VAR_7)
  VAR_9 += 1;


 if (!VAR_9) {
  *VAR_8 = ((void*)0);
  return 0;
 }


 VAR_12 = FUNC_0(VAR_9 + 1, VAR_3);
 if (!VAR_12)
  return -VAR_2;


 if (VAR_10) {
  VAR_11 = VAR_5->items;
  for (; VAR_11->prog; VAR_11++)
   if (VAR_11->prog != VAR_6 &&
       VAR_11->prog != &VAR_4.prog) {
    VAR_12->items[VAR_14++].prog =
     VAR_11->prog;
   }
 }
 if (VAR_7)
  VAR_12->items[VAR_14++].prog = VAR_7;
 VAR_12->items[VAR_14].prog = ((void*)0);
 *VAR_8 = VAR_12;
 return 0;
}
