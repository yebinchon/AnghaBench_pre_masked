
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sky2_port {int tx_pending; } ;


 int FUNC_0 (struct sky2_port const*) ;

__attribute__((used)) static inline int FUNC_1(const struct sky2_port *VAR_0)
{
 return VAR_0->tx_pending - FUNC_0(VAR_0);
}
