
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mdio_ops {int write; int read; int mode_support; } ;
struct cphy_ops {int mmds; } ;
struct TYPE_2__ {int prtad; int mdio_write; int mdio_read; int mode_support; int mmds; } ;
struct cphy {unsigned int caps; char const* desc; TYPE_1__ mdio; struct cphy_ops const* ops; struct adapter* adapter; } ;
struct adapter {int dummy; } ;



__attribute__((used)) static inline void FUNC_0(struct cphy *VAR_0, struct adapter *VAR_1,
        int VAR_2, const struct cphy_ops *VAR_3,
        const struct mdio_ops *VAR_4,
         unsigned int VAR_5, const char *VAR_6)
{
 VAR_0->caps = VAR_5;
 VAR_0->adapter = VAR_1;
 VAR_0->desc = VAR_6;
 VAR_0->ops = VAR_3;
 if (VAR_4) {
  VAR_0->mdio.prtad = VAR_2;
  VAR_0->mdio.mmds = VAR_3->mmds;
  VAR_0->mdio.mode_support = VAR_4->mode_support;
  VAR_0->mdio.mdio_read = VAR_4->read;
  VAR_0->mdio.mdio_write = VAR_4->write;
 }
}
