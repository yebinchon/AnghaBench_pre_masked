
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gelic_port {struct gelic_card* card; } ;
struct gelic_card {int dummy; } ;



__attribute__((used)) static inline struct gelic_card *FUNC_0(struct gelic_port *VAR_0)
{
 return VAR_0->card;
}
