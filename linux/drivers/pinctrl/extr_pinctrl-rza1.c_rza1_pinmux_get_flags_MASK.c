
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rza1_swio_entry {int dummy; } ;
struct rza1_pinmux_conf {struct rza1_swio_entry* swio_entries; struct rza1_bidir_entry* bidir_entries; } ;
struct rza1_pinctrl {struct rza1_pinmux_conf* data; } ;
struct rza1_bidir_entry {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (unsigned int,unsigned int,unsigned int,struct rza1_bidir_entry const*) ;
 int FUNC_1 (unsigned int,unsigned int,unsigned int,struct rza1_swio_entry const*) ;

__attribute__((used)) static unsigned int FUNC_2(unsigned int VAR_3, unsigned int VAR_4,
       unsigned int VAR_5,
       struct rza1_pinctrl *VAR_6)

{
 const struct rza1_pinmux_conf *VAR_7 = VAR_6->data;
 const struct rza1_bidir_entry *VAR_8 = VAR_7->bidir_entries;
 const struct rza1_swio_entry *VAR_9 = VAR_7->swio_entries;
 unsigned int VAR_10 = 0;
 int VAR_11;

 if (FUNC_0(VAR_3, VAR_4, VAR_5, VAR_8))
  VAR_10 |= VAR_0;

 VAR_11 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_9);
 if (VAR_11 == 0)
  VAR_10 |= VAR_2;
 else if (VAR_11 > 0)
  VAR_10 |= VAR_1;

 return VAR_10;
}
