
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mon_reader_bin {TYPE_1__* b_vec; } ;
struct mon_bin_hdr {int dummy; } ;
struct TYPE_2__ {scalar_t__ ptr; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static inline struct mon_bin_hdr *FUNC_0(const struct mon_reader_bin *VAR_1,
    unsigned int VAR_2)
{
 return (struct mon_bin_hdr *)
     (VAR_1->b_vec[VAR_2 / VAR_0].ptr + VAR_2 % VAR_0);
}
