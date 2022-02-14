
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int revision; } ;
struct net_device {int hw_enc_features; int gso_partial_features; int features; int vlan_features; int hw_features; int priv_flags; } ;
struct hnae3_handle {int flags; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 struct hnae3_handle* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_21)
{
 struct hnae3_handle *VAR_22 = FUNC_0(VAR_21);
 struct pci_dev *VAR_23 = VAR_22->pdev;

 VAR_21->priv_flags |= VAR_1;

 VAR_21->hw_enc_features |= VAR_13 | VAR_12 |
  VAR_15 | VAR_17 | VAR_4 |
  VAR_2 | VAR_18 | VAR_19 | VAR_5 |
  VAR_6 | VAR_7 |
  VAR_8 | VAR_16;

 VAR_21->hw_enc_features |= VAR_20;

 VAR_21->gso_partial_features |= VAR_6;

 VAR_21->features |= VAR_13 | VAR_12 |
  VAR_9 |
  VAR_11 | VAR_10 |
  VAR_15 | VAR_17 | VAR_4 |
  VAR_2 | VAR_18 | VAR_19 | VAR_5 |
  VAR_6 | VAR_7 |
  VAR_8 | VAR_16;

 VAR_21->vlan_features |=
  VAR_13 | VAR_12 | VAR_15 |
  VAR_17 | VAR_4 | VAR_2 |
  VAR_18 | VAR_19 | VAR_5 |
  VAR_6 | VAR_7 |
  VAR_8 | VAR_16;

 VAR_21->hw_features |= VAR_13 | VAR_12 |
  VAR_11 | VAR_10 |
  VAR_15 | VAR_17 | VAR_4 |
  VAR_2 | VAR_18 | VAR_19 | VAR_5 |
  VAR_6 | VAR_7 |
  VAR_8 | VAR_16;

 if (VAR_23->revision >= 0x21) {
  VAR_21->hw_features |= VAR_3;
  VAR_21->features |= VAR_3;

  if (!(VAR_22->flags & VAR_0)) {
   VAR_21->hw_features |= VAR_14;
   VAR_21->features |= VAR_14;
  }
 }
}
